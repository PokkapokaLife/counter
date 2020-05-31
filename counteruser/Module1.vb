Module Module1

    Sub Main()
        Dim counter As New CounterLib()
        Dim i As Integer
        For i = 1 To 3
            counter.Increment()
            System.Console.WriteLine(counter.Value)
        Next
    End Sub

End Module
