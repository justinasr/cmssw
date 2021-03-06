///////////////////////////////////////////////////////////////////////////////
// File: EcalBarrelNumberingScheme.h
// Description: Numbering scheme for barrel electromagnetic calorimeter
///////////////////////////////////////////////////////////////////////////////
#ifndef EcalBarrelNumberingScheme_h
#define EcalBarrelNumberingScheme_h

#include "Geometry/EcalCommonData/interface/EcalNumberingScheme.h"
#include <string>

class EcalBarrelNumberingScheme : public EcalNumberingScheme {
public:
  EcalBarrelNumberingScheme();
  ~EcalBarrelNumberingScheme() override;
  uint32_t getUnitID(const EcalBaseNumber& baseNumber) const override;

private:
  std::pair<int, int> numbers(const std::string&) const;
};

#endif
