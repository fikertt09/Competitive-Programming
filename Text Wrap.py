import textwrap
def wrap(string, max_width):
    new_string = ""
    for counter in range((len(string)//max_width) + 1):
        new_string = new_string + string[counter * max_width: (counter + 1) * max_width] + '\n'
    return new_string



if __name__ == '__main__':
