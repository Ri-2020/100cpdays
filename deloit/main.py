def hp(num):
    result = ""
    for i in range(len(num)):
        if(int(num[i]) %2 == 1):
            result += num[i]
    for i in range(len(num)-1, -1 , -1):
        if(int(num[i])%2 == 0):
            result += num[i]
    return result


def main():
    n = int(input())
    for i in range(n):
        str = input()
        print(hp(str))

main()

        
