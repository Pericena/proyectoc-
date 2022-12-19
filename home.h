//---------------------------------------------------------------------------

#ifndef homeH
#define homeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFHome : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *Inicio1;
	TMenuItem *Usuario1;
	TMenuItem *Administrador;
	TMenuItem *Medico;
	TMenuItem *Paciente;
	TMenuItem *Help1;
	TMenuItem *Salir1;
	TMenuItem *Register1;
	TImage *Image1;
	void __fastcall AdministradorClick(TObject *Sender);
	void __fastcall Salir1Click(TObject *Sender);
	void __fastcall Help1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFHome(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFHome *FHome;
//---------------------------------------------------------------------------
#endif
