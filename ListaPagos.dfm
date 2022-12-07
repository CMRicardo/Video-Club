object frmListaPagos: TfrmListaPagos
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Lista de Pagos'
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
  object dbgPagos: TDBGrid
    Left = 8
    Top = 8
    Width = 668
    Height = 445
    DataSource = dsPagos
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object qryPagos: TFDQuery
    Connection = mdCon.conMySQL
    SQL.Strings = (
      
        'SELECT '#10'    p.payment_id as '#39'N'#250'mero de Pago'#39','#10'    p.payment_date' +
        ' as '#39'Fecha de Pago'#39','#10'    p.customer_id as '#39'C'#243'digo del Cliente'#39','#10 +
        '    c.first_name as '#39'Nombre del Cliente'#39','#10'    c.last_name as '#39'Ap' +
        'ellido del Cliente'#39','#10'    p.amount as '#39'Monto Pagado'#39#10'FROM'#10'    pay' +
        'ment p'#10'        LEFT JOIN'#10'    customer c ON p.customer_id = c.cus' +
        'tomer_id;')
    Left = 64
    Top = 112
  end
  object dsPagos: TDataSource
    DataSet = qryPagos
    Left = 168
    Top = 112
  end
end
