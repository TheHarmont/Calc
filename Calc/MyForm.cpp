#include "MyForm.h"

#include <Windows.h>

#include <string>

using namespace Calc;
[STAThread]

    int WINAPI
    WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
      Application::EnableVisualStyles();
      Application::SetCompatibleTextRenderingDefault(false);
      Application::Run(gcnew MyForm);
      return 0;
    }

    System::Void Calc::MyForm::button17_Click(System::Object ^ sender, System::EventArgs ^ e) {
        textBox1->Text = textBox1->Text + 0;
    }

    System::Void Calc::MyForm::button13_Click(System::Object ^ sender,System::EventArgs ^ e) {
                                              
      textBox1->Text = textBox1->Text + 1;
    }

    System::Void Calc::MyForm::button14_Click(System::Object ^ sender,System::EventArgs ^ e) {
                                              
      textBox1->Text = textBox1->Text + 2;
    }

    System::Void Calc::MyForm::button15_Click(System::Object ^ sender,System::EventArgs ^ e) {                                     
      textBox1->Text = textBox1->Text + 3;
    }

    System::Void Calc::MyForm::button9_Click(System::Object ^ sender,System::EventArgs ^ e) {                                       
      textBox1->Text = textBox1->Text + 4;
    }

    System::Void Calc::MyForm::button10_Click(System::Object ^ sender,System::EventArgs ^ e) {                                      
      textBox1->Text = textBox1->Text + 5;
    }

    System::Void Calc::MyForm::button11_Click(System::Object ^ sender,System::EventArgs ^ e) {                                       
      textBox1->Text = textBox1->Text + 6;
    }

    System::Void Calc::MyForm::button5_Click(System::Object ^ sender,System::EventArgs ^ e) {                                     
      textBox1->Text = textBox1->Text + 7;
    }

    System::Void Calc::MyForm::button6_Click(System::Object ^ sender,System::EventArgs ^ e) {                                     
      textBox1->Text = textBox1->Text + 8;
    }

    System::Void Calc::MyForm::button7_Click(System::Object ^ sender,System::EventArgs ^ e) {                                      
      textBox1->Text = textBox1->Text + 9;
    }

    System::Void Calc::MyForm::button18_Click(System::Object ^ sender,System::EventArgs ^ e) {                              
      textBox1->Text = textBox1->Text + ",";
    }

    // + - * /
      System::Void Calc::MyForm::button4_Click(System::Object ^ sender,System::EventArgs ^ e) {
     /*   a = float->Parse(textBox1->Text);
      textBox1->Text->Clear();
      count = 1;
      textBox1->Text = a.ToString() + "+";
      znak = true; */
      
    }
                                    
                                             
    System::Void Calc::MyForm::button8_Click(System::Object ^ sender,System::EventArgs ^ e) {
      /*   a = float->Parse(textBox1->Text);
       textBox1->Text->Clear();
       count = 1;
       textBox1->Text = a.ToString() + "-";
       znak = true; */
    }
                                             
    System::Void Calc::MyForm::button12_Click(System::Object ^ sender,System::EventArgs ^ e) {
      /*   a = float->Parse(textBox1->Text);
       textBox1->Text->Clear();
       count = 1;
       textBox1->Text = a.ToString() + "*";
       znak = true; */
    }
                                              
    System::Void Calc::MyForm::button16_Click(System::Object ^ sender,System::EventArgs ^ e) {
      /*   a = float->Parse(textBox1->Text);
       textBox1->Text->Clear();
       count = 1;
       textBox1->Text = a.ToString() + "/";
       znak = true; */
    }
                                              
