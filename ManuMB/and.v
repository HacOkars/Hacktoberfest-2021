module andGate(input a, b,
                output y);
        assign y = a & b;

endmodule

module gateTest;
    reg a, b;
    wire y;
    integer i;

    andGate uut(.a(a), .b(b), .y(y));

    initial begin
        a <= 0;
        b <= 0;

        $monitor("a = %b    b = %b    y = %b\n", a, b, y);

        for(i = 0; i < 4; i = i + 1) begin
            {a, b} = i;
            #10;
        end
    end
endmodule