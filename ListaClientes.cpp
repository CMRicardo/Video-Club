//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ListaClientes.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmListaClientes *frmListaClientes;
//---------------------------------------------------------------------------
__fastcall TfrmListaClientes::TfrmListaClientes(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmListaClientes::FormCreate(TObject *Sender)
{
    qryCliente->Active = true;
}
//---------------------------------------------------------------------------

