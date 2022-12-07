//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "principal.h"
#include "mdConexion.h"
#include "mdImagenes.h"
#include "ListaClientes.h"
#include "ListaPagos.h"
// El formulario principal conoce a Lista de Clientes

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmPrincipal* frmPrincipal;
//---------------------------------------------------------------------------
__fastcall TfrmPrincipal::TfrmPrincipal(TComponent* Owner) : TForm(Owner) {}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::actClientesExecute(TObject* Sender)
{
    // Crear Lista de Clientes de forma Dinamica
    // 1) Definir un puntero a la clase del Formulario
    TfrmListaClientes* clientes;
    // 2) Crear el objeto
    clientes = new TfrmListaClientes(this);
    // 3) Mostrar el objeto o hacerlo visible
    clientes->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::actPagosExecute(TObject* Sender)
{
    // Crear Lista de Clientes de forma Dinamica
    // 1) Definir un puntero a la clase del Formulario
    TfrmListaPagos* pagos;
    // 2) Crear el objeto
    pagos = new TfrmListaPagos(this);
    // 3) Mostrar el objeto o hacerlo visible
    pagos->Show();
}
//---------------------------------------------------------------------------

