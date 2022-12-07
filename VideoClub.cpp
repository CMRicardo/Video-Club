//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("principal.cpp", frmPrincipal);
USEFORM("ListaClientes.cpp", frmListaClientes);
USEFORM("ListaPagos.cpp", frmListaPagos);
USEFORM("mdConexion.cpp", mdCon); /* TDataModule: File Type */
USEFORM("mdImagenes.cpp", mdImagenes64x64); /* TDataModule: File Type */
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TmdCon), &mdCon);
		Application->CreateForm(__classid(TmdImagenes64x64), &mdImagenes64x64);
		Application->CreateForm(__classid(TfrmPrincipal), &frmPrincipal);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
