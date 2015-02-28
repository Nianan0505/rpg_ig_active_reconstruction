/* Copyright (c) 2015, Stefan Isler, islerstefan@bluewin.ch
*
* 
translation is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
translation is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU Lesser General Public License for more details.
You should have received a copy of the GNU Lesser General Public License
along with translation. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "movements/relative_movement.h"

#include <Eigen/Core>
#include <Eigen/Geometry>

namespace movements
{
/// simplest version of a relative movement: a translation
class Translation:public RelativeMovement::RelativeMovementInstance
{
public:
  Translation();
  Translation( double _x, double _y, double _z );
  Translation( Eigen::Vector3d _translation );
  
  std::string type();
  
  GeometryPose applyToBasePose( GeometryPose const& _base );
  
  /** returns a RelativeMovement that contains the wanted translation */
  static RelativeMovement translation( double _x, double _y, double _z );
  /** returns a RelativeMovement that contains the wanted translation */
  static RelativeMovement translation( Eigen::Vector3d _translation );
  
  EIGEN_MAKE_ALIGNED_OPERATOR_NEW
private:
  Eigen::Vector3d translation_;
};
  
  
}