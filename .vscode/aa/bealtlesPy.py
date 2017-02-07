def mdc(x, y) :
    mdc = 1
    divisor = 2
    while (divisor <= x and divisor <= y) :
        if (x % divisor == 0 and y % divisor == 0) :
            x = x/divisor
            y = y/divisor
            mdc *= divisor
        elif (x % divisor == 0) :
            x = x/divisor
        elif (y % divisor == 0) :
            y = y/divisor
        else :
            divisor = divisor + 1
    return mdc
 
def binarieToDecimal(binarie) :
    decimal = 0
    for i in xrange(len(binarie) - 1, -1, -1) :
        decimal += int(binarie[len(binarie) - i - 1]) * 2**i
    return decimal
 
def pow(x, y) :
    if (y == 0) :
        return 1
    if (y % 2 == 0) :
        return pow(x*x, y/2)
    else :
        return x * pow(x, y-1)
 
def printMessage(b, i) :
    if (b) :
        print "Pair #%d: All you need is love!" % (i+1)
    else :
        print "Pair #%d: Love is not all you need!" % (i+1)
 
 
cases = int(raw_input())
 
for i in range(0, cases) :
	s1 = raw_input()
	s2 = raw_input()
 
	boolean = mdc(binarieToDecimal(s1), binarieToDecimal(s2)) != 1
	printMessage(boolean, i)
