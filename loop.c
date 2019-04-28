for (int i = 0; i < height; i++) // increases the height of pyramid
  {
        for (int j = 7; j > i; --j) //increments downward
        {
            printf(" ");
        }
            for (int k = -1; k < i; k++) // adds blocks to each level
            {
            printf("#");
            }
    printf("\n");
  }
}