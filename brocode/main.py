def funct(matrix):
    n = len(matrix)
    one = []
    two = []
    ma = -1
    try:
        # print("c1")
        for i in range(n):
            if(len(one[i]) != n):
                raise Exception("invalid input")
            one.append(matrix[i][i])
            two.append(matrix[n-i-1][n-i-1])
        # print("c2")
        for i in range(len(one)):
            isPrime = 1
            for j in range(2 ,one[i]//2 , 1):
                if(one[i]%j == 0):
                    isPrime = 0
                    break
            if(isPrime):
                ma = max(ma , one[i])
        # print("c3")
        for i in range(len(two)):
            isPrime = 1
            for j in range(2,two[i]//2 ,1):
                if(two[i]%j == 0):
                    isPrime = 0
                    break
            if(isPrime):
                ma = max(ma , two[i])
        if(ma == -1):
            print("No prime number available")
        else:
            print(ma)
    except:
        print("Invalid input")


a = [[12,12,32,42], [2,112,232], [112, 112,2112,112] , [122,332,332,332]]
funct(a)