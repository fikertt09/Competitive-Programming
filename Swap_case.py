def swap_case(s):
    return ''.join(char.upper() if char.islower() else char.lower() for char in s)
    return

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
