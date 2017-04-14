#	pragma once

#	include "config.h"

#	include "plane.h"

namespace mt
{
	struct box3f
	{
		/*union
		{
			struct {vec3f vb,ve;};
			struct {vec3f v[2];};
			struct {vec3f min, max;};
		};*/
		vec3f min, max;

		LIBMATH_METHOD_INLINE box3f();
		LIBMATH_METHOD_INLINE box3f(const box3f & _box);
		LIBMATH_METHOD_INLINE box3f(const vec3f &_min,const vec3f &_max);
	};

	LIBMATH_FUNCTION_INLINE void reset(box3f & box,const vec3f & initValue);
	LIBMATH_FUNCTION_INLINE void reset(box3f & box,float x, float y, float z);
	LIBMATH_FUNCTION_INLINE void add_internal_point(box3f & box, float x,float y,float z);
	LIBMATH_FUNCTION_INLINE void add_internal_point(box3f & box, const vec3f & p);
	LIBMATH_FUNCTION_INLINE void set_box_from_min_max(box3f & box, const vec3f & min, const vec3f & max);
	LIBMATH_FUNCTION_INLINE void set_box_from_center_and_extent(box3f & box, const vec3f & center, const vec3f & extent);
	LIBMATH_FUNCTION_INLINE void get_point_from_box(vec3f point[8],const box3f & box);
	LIBMATH_FUNCTION_INLINE bool is_intersect(const box3f & _a, const box3f & _b);
}

#	if MENGINE_MATH_FORCE_INLINE == 1
#	include "box3_inline.h"
#	endif
