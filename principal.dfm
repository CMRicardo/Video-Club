object frmPrincipal: TfrmPrincipal
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Menu Principal'
  ClientHeight = 173
  ClientWidth = 598
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object btnClientes: TButton
    Left = 24
    Top = 24
    Width = 185
    Height = 89
    Action = actClientes
    ImageAlignment = iaTop
    ImageMargins.Top = 20
    Images = mdImagenes64x64.img64x64
    TabOrder = 0
  end
  object btnPagos: TButton
    Left = 368
    Top = 24
    Width = 201
    Height = 89
    Action = actPagos
    Caption = 'Lista de Pagos'
    ImageAlignment = iaTop
    ImageMargins.Top = 20
    Images = mdImagenes64x64.img64x64
    TabOrder = 1
  end
  object aclMenu: TActionList
    Images = mdImagenes64x64.img64x64
    Left = 272
    Top = 56
    object actClientes: TAction
      Caption = 'Lista de Clientes'
      ImageIndex = 28
      OnExecute = actClientesExecute
    end
    object actPagos: TAction
      Caption = 'actPagos'
      ImageIndex = 12
      OnExecute = actPagosExecute
    end
  end
end
