//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "home.h"
#include "login.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFHome *FHome;
//---------------------------------------------------------------------------
__fastcall TFHome::TFHome(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFHome::AdministradorClick(TObject *Sender)
{
FLogin -> ShowModal();
//ShowMessage("Administrador");
}
//---------------------------------------------------------------------------

void __fastcall TFHome::Salir1Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TFHome::Help1Click(TObject *Sender)
{
 ShowMessage("softaware c++");
}
//---------------------------------------------------------------------------


