Imports System

Module Program

	Function Main(test1 As Integer, test2 As Double)

        Dim param1 As Integer
        Dim param2 As Double
        Dim param3 As String
        Dim param4 As Boolean

        Dim array(4) As Integer
        array(1) = 1


        If param1 = 1 Then param1 = param1 + 1

        Do While param1 = 1
            param1 = param1 + 1
        Loop

        For Each param As Integer In list
            param = param + 1
        Next

        While param1 <= 10
            param1 = param1 + 1
        End While

        For param As Integer = 5 To 7
            param = param + 1
        Next

        Return param4


    End Function


End Module