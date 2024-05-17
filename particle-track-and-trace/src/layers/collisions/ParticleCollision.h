#ifndef PARTICLECOLLISION_H
#define PARTICLECOLLISION_H


#include <vtkPoints.h>
#include <memory.h>

#include "../Layer.h"
#include "ParticleCollisionCallback.h"

class ParticleCollision : public Layer {
private:
  std::vector<std::pair<vtkSmartPointer<vtkPoints>, std::unique_ptr<ParticleCollisionCallback>>> pointsets;
  vtkSmartPointer<vtkPoints> position;
  double distance;
  bool isInRange(double position[3], double point[3]);

public:
  ParticleCollision();
  void addPointSet(vtkSmartPointer<vtkPoints> points, std::unique_ptr<ParticleCollisionCallback> callback);

  void setDistance(double distance);

  void setPosition(vtkSmartPointer<vtkPoints> position);
  void updateData(int t) override;
};

#endif //PARTICLECOLLISION_H
