//-------------------------------------------------------------------------------
// Copyright (c) 2017 John D. Haughton
// SPDX-License-Identifier: MIT
//-------------------------------------------------------------------------------

#pragma once

#include "PLT/Audio.h"
#include "SIG/SIG.h"

class Monitor : public PLT::Audio::Out
{
public:
   class Input
   {
   public:
      virtual ~Input() = default;

      virtual SIG::Signal monitorIn() = 0;
   };

   Monitor()
      : PLT::Audio::Out(SIG_SAMPLE_RATE, PLT::Audio::Format::SINT16, /* channels */ 1)
   {}

   void setInput(Input* input_) { input = input_; }

   void play() { setEnable(true); }

   void stop() { setEnable(false); }

private:
   virtual void getSamples(int16_t* buffer, unsigned n) override
   {
      for(unsigned i = 0; i < n; ++i)
      {
         buffer[i] = input->monitorIn() * 0x7FFF;
      }
   }

   Input* input{};
};
