# Flatten an array
## How do we can  flatten an array?
- To flatten array, means convert to 1D array,You simply put values from rows in order.
 ### Let say the 2D array is 3x4. Then new 1D array has length 12 also
- If we have position (i, j) in 2D array, what is index in 1D array?
- If we have index in 1D array, what is the position (i, j) in 2D array? [The answer her](https://github.com/Ragdha-Elgaidi/cpp-lessons-M_s_MultidimensionalArrays/blob/main/Flatten%20an%20array/Flatten%20an%20array%20code.cpp)
### Let Say we have matrix of ROWS x COLS
- 1D here: 8 16 9 52 3 15 27 6 14 25 2 10
#### To convert from (i, j) in matrix to 1D array
#### use this formula:
- i * COLS + j
  - (1, 2) ⇒ 1 * 4 + 2 = 6
#### To convert from index in 1D array to (i, j) in matrix
##### use this formula:
- i = idx/COLS, j = idx%COLS
  - Idx = 6 ⇒ (6/4, 6%4) = (1, 2)
- Why? Idx = i * COLS + j
- Idx / COLS = (i * COLS + j)/COLS = i + 0, as j < COLS
- Idx % COLS = (i * COLS + j)%COLS = 0 + j, as j < COLS and (i*COLS)%COLS = 0
