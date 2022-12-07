//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ListaPagos.h"
#include "mdConexion.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmListaPagos* frmListaPagos;
//---------------------------------------------------------------------------
__fastcall TfrmListaPagos::TfrmListaPagos(TComponent* Owner) : TForm(Owner) {}
//---------------------------------------------------------------------------
void __fastcall TfrmListaPagos::FormCreate(TObject* Sender)
{
    qryPagos->Active = true;
}
//---------------------------------------------------------------------------

