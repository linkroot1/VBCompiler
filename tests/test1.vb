Imports System

Module Program

    Function Main(test1 As Integer, test2 As Double)
	
		Dim A = 3
		
		If dayW = Wednesday Then
			If hour = 14 Or hour = 15 Then
				Return True
			Else
				Return False
			End If
		ElseIf dayW = Thursday Then
			If hour = 12 Then
				Return True
			Else
				Return False
			End If
		Else
			Return False
		End If
	
    End Function
	
End Module