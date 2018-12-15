#ifndef MUNIVEHICLE_H
#DEFINE MUNIVEHICLE_H

class MuniVehicle
{
private:
  int totalFares;
public:
  MuniVehicle()
  { totalFares = 0; }

  int getTotalFares()
  { return totalFares; }

  virtual int paidFare()
  { return totalFares += 2; }

};
#endif
