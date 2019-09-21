#!/usr/bin/env python3
# keep last few lines during iteration
from collections import deque

def search(lines, pattern, history=5):
    # lines: file to open
    # pattern: text to look for
    # history: length of queue to maintain
    previous_lines = deque(maxlen=history)
    for line in lines:
        if pattern in line:
            yield line, previous_lines
        print("previous lines before append:")
        print(previous_lines)
        previous_lines.append(line)

# Example use on a file
if __name__ == '__main__':
    with open('random_text.txt') as f:
        for line, prevlines in search(f, 'stef', 5):
#            print("Here are queued lines:", end='\n\n')
            for pline in prevlines:
                print(pline)
#            print(f"This is the current line: {line}", end='')
#            print('-'*20)
