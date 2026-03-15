//-------------------------------------------------------------------------------
// Copyright (c) 2016 John D. Haughton
// SPDX-License-Identifier: MIT
//-------------------------------------------------------------------------------

#include "STB/ConsoleApp.h"

#include "AdditiveGUI.h"


#define  PROGRAM         "Additive"
#define  DESCRIPTION     "Demonstrate additive synthesis"
#define  LINK            "https://github.com/SloeComputers/Additive"
#define  COPYRIGHT_YEAR  "2016"
#define  AUTHOR          "John D. Haughton"


class AdditiveApp : public STB::ConsoleApp
{
public:
   AdditiveApp()
      : ConsoleApp(PROGRAM, DESCRIPTION, LINK, AUTHOR, COPYRIGHT_YEAR)
   {
   }

private:
   virtual int startConsoleApp() override
   {
      return AdditiveGUI<32>().eventLoop();
   }
};


int main(int argc, const char* argv[])
{
   AdditiveApp().parseArgsAndStart(argc, argv);
}
