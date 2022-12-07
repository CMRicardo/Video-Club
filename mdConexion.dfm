object mdCon: TmdCon
  OldCreateOrder = False
  Height = 185
  Width = 279
  object conMySQL: TFDConnection
    Params.Strings = (
      'Server=localhost'
      'User_Name=unah'
      'Password=unah2018@'
      'Database=sakila'
      'DriverID=MySQL')
    Connected = True
    LoginPrompt = False
    Left = 40
    Top = 24
  end
  object FDPhysMySQLDriverLink1: TFDPhysMySQLDriverLink
    VendorLib = 'C:\Program Files (x86)\MySQL\MySQL Server 5.7\lib\libmysql.dll'
    Left = 168
    Top = 24
  end
end
