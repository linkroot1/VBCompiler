Imports System

Module Program

	Function Main(test1 As Integer, test2 As Double)

        Select Case test1
			Case 1 To 2
				test2 = 1
			Case 3 To 4 
				test2 = 2
		End Select

    End Function


End Module