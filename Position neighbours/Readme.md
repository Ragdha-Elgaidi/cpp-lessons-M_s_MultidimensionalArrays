# Position neighbours
<img align="right" height="200px" alt="PNG" src="https://user-images.githubusercontent.com/76912120/207775355-5af4911d-0aee-44e4-9727-41c77c3ae749.png" />

- For a position (i, j)
  - Sometimes we use 4 neighbours
     - up, right, down, left
  - Sometimes we use 8 neighbours
      - up, right, down, left, up right, up left, down right, down left
## Let’s find the relation

|                  |    Up = (r-1, c)        |                         | 
| -------------    |      -------------      |     -------------       |
| Left = (r, c-1)  |       (r, c)            |     Right = (r, c+1)    |
|                  |    Down = (r+1, c)      |   Diagonal: (r+1, c+1)  |

### What is change from (r, c) to the down?
  - (r+1, c): row is changed by +1, col is not changed
### What is change from (r, c) to the Left?
  - (r+1, c): row is not changed, col is changed by -1
- We can create 2 arrays to encode these +1/-1/0 changes between locations!
  - Some guys call it the direction array
