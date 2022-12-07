//---------------------------------------------------------------------------


#pragma hdrstop

#include "mdConexion.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TmdCon *mdCon;
//---------------------------------------------------------------------------
__fastcall TmdCon::TmdCon(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
