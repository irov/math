#	pragma once

#	include "math/config.h"

namespace mt
{
	LIBMATH_FUNCTION_INLINE float angle_norm(float _angle);
	LIBMATH_FUNCTION_INLINE float angle_norm2(float _angle);
	LIBMATH_FUNCTION_INLINE void angle_correct_interpolate_from_to(float _from, float _to, float & _correct_from, float & _correct_to);
	LIBMATH_FUNCTION_INLINE float angle_length( float _angle1, float _angle2 );
	LIBMATH_FUNCTION_INLINE float angle_norm360( float _angle );
	LIBMATH_FUNCTION_INLINE float angle_norm180( float _angle );	
	LIBMATH_FUNCTION_INLINE float angle_delta_deg( float _angle1, float _angle2 );
	LIBMATH_FUNCTION_INLINE float acos32( float _x );
	LIBMATH_FUNCTION_INLINE float angle_in_interval_deg( float _angle, float _min, float _max );	
}

#	if LIBMATH_FORCE_INLINE == 1
#	include "math/angle_inline.h"
#	endif
