//---------------------------------------------------------------------------

#ifndef ListaPagosH
#define ListaPagosH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TfrmListaPagos : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *dbgPagos;
	TFDQuery *qryPagos;
	TDataSource *dsPagos;
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmListaPagos(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmListaPagos *frmListaPagos;
//---------------------------------------------------------------------------
#endif
