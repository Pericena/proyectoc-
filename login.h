//---------------------------------------------------------------------------

#ifndef loginH
#define loginH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TFLogin : public TForm
{
__published:	// IDE-managed Components
	TLabel *Clave;
	TImage *Image1;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *EClave;
	TEdit *EUsuario;
	TButton *Enter;
	TButton *Button1;
	TMainMenu *MainMenu1;
	TMenuItem *Salir1;
	TMenuItem *Help1;
private:	// User declarations
public:		// User declarations
	__fastcall TFLogin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFLogin *FLogin;
//---------------------------------------------------------------------------
#endif
