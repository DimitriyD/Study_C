int function_year(int year) {
     int vis = 0;  

  // Юлианский
  if (year >= 1700 && year <= 1917)
{
      if (!(year % 4))
      vis = 1;
  }
  // Грегорианский 
  else if (year >= 1919 && year <= 2700)
  {
      if (!(year % 400) || (!(year % 100) && !(year % 4)))
      vis = 1;
  }
  else if (year ==1918)
  {
      return 26;
  }
  else 
  {
      return -1;
  }

  if (vis)
  return 12;
  else
  return 13;

}