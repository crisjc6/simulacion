object FormView: TFormView
  Left = 408
  Top = 206
  Width = 685
  Height = 456
  Caption = 'Gr'#225'fico2Rayo'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  OnMouseMove = FormMouseMove
  OnMouseWheelDown = FormMouseWheelDown
  OnMouseWheelUp = FormMouseWheelUp
  OnResize = FormResize
  PixelsPerInch = 96
  TextHeight = 13
  object btnCargarCubo: TButton
    Left = 8
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Cargar Cubo'
    TabOrder = 0
    OnClick = btnCargarCuboClick
  end
  object Button1: TButton
    Left = 584
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Calcular'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 568
    Top = 48
    Width = 89
    Height = 25
    Caption = 'Mostrar Lineas'
    TabOrder = 2
    OnClick = Button2Click
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 100
    OnTimer = Timer1Timer
    Left = 144
    Top = 8
  end
  object OpenDialog1: TOpenDialog
    DefaultExt = 'pro'
    Filter = 
      'Project (*.pro)|*.pro|Room (*.roo)|*.roo|Surface (*.sur)|*.sur|M' +
      'aterial (*.mat;*.txt)|*.mat;*.txt|Drawing exchage format(*.dxf)|' +
      '*.dxf|All files (*.*)|*.*'
    Left = 96
    Top = 8
  end
end
