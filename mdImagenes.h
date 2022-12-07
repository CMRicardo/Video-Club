//---------------------------------------------------------------------------

#ifndef mdImagenesH
#define mdImagenesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <System.ImageList.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ImgList.hpp>
//---------------------------------------------------------------------------
class TmdImagenes64x64 : public TDataModule
{
__published:	// IDE-managed Components
	TImageList *img64x64;
private:	// User declarations
public:		// User declarations
	__fastcall TmdImagenes64x64(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmdImagenes64x64 *mdImagenes64x64;
//---------------------------------------------------------------------------
#endif
