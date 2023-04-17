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

        Select Case number

            Case 1 To 5

                number = number + 1

            Case 5 To 7
                number = number + 2

            Case 7 To 9
                number = number + 3

            Case Else

                number = number + 4

        End Select

        If param1 = 1 Then
            param1 = param1 + 1
        ElseIf param1 = 2 Then
            param1 = param1 + 2
        Else
            param1 = param1 + 3
        End If


        Return param4

    End Function


End Module