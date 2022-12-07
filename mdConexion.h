//---------------------------------------------------------------------------

#ifndef mdConexionH
#define mdConexionH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Phys.MySQL.hpp>
#include <FireDAC.Phys.MySQLDef.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
//---------------------------------------------------------------------------
class TmdCon : public TDataModule
{
__published:	// IDE-managed Components
	TFDConnection *conMySQL;
	TFDPhysMySQLDriverLink *FDPhysMySQLDriverLink1;
private:	// User declarations
public:		// User declarations
	__fastcall TmdCon(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmdCon *mdCon;
//---------------------------------------------------------------------------
#endif
