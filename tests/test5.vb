Imports System

Module Program

    Function Main(test1 As Integer, test2 As Double)


        Select Case number

            Case 1 To 5, 15

                number = number + 1

            Case 5 To 7, Is < 0
                number = number + 2

            Case 1 To 4, 7 To 9, 11, 13, Is > test1
                number = number + 3

            Case Else

                number = number + 4

        End Select


    End Function


End Module
