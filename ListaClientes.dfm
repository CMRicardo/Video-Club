object frmListaClientes: TfrmListaClientes
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Lista de Clientes'
  ClientHeight = 461
  ClientWidth = 684
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object dbgClientes: TDBGrid
    Left = 8
    Top = 8
    Width = 668
    Height = 446
    DataSource = dsCliente
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object qryCliente: TFDQuery
    Connection = mdCon.conMySQL
    SQL.Strings = (
      'select'
      '  customer_id as '#39'N'#250'mero de Cliente'#39','
      '  store_id as '#39'N'#250'mero de Tienda'#39','
      '  first_name as '#39'Nombre'#39','
      '  last_name as '#39'Apellido'#39','
      '  email as '#39'Correo electronico'#39
      'from customer')
    Left = 64
    Top = 112
  end
  object dsCliente: TDataSource
    DataSet = qryCliente
    Left = 168
    Top = 112
  end
end
