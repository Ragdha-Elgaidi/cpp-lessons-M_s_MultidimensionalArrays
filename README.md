<img align="right" height="200px" alt="JPG" src="https://user-images.githubusercontent.com/76912120/207598873-50f2f443-d2f4-47c9-84b5-fd4fced551ae.jpg" />
# cpp-lessons-M_s_MultidimensionalArrays
## 2D Arrays
### C++ saves our time by using 2D arrays
- 2D = Table: rows x columns ,same rules as 1D Arrays
- We create it as double grades[7][4]; For 7 rows and 4 columns
### To access in 2D arrays:
- grades[6][2]
## Multidimensional Arrays
- What if we have 5 years. For each year, we have 100 students and 20 subjects? How to represent?
  - 5 Arrays, each one is 2D array [100][20], Not convenient.
  - C++: double grades[5][100][20];
### 3D array
- grades[2][70][8];
   - Grade for the 3rd year, student #71, 9th subject
    - This is 2 * 70 * 8 double numbers
