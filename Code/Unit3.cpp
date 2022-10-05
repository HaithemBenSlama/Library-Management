//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBibliotheque *Bibliotheque;
//---------------------------------------------------------------------------
__fastcall TBibliotheque::TBibliotheque(TComponent* Owner)
	: TForm(Owner)
{
	Timer1->Interval=4500;
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

void __fastcall TBibliotheque::FormClose(TObject *Sender, TCloseAction &Action)
{
	Timer1->Enabled=false;
	Timer1->DestroyComponents();
	Form1->ShowModal();
    Form1->Show();
}
//---------------------------------------------------------------------------


void __fastcall TBibliotheque::Timer1Timer(TObject *Sender)
{
	Form1->Visible=false;
	Close();
}
//---------------------------------------------------------------------------

