#	pragma once

#	include <stddef.h>

namespace mt
{
	const float m_pi = 3.14159265358979323846f;
	const float m_inv_pi = 1.f / m_pi;
	const float m_negative_pi = -m_pi;
	const float m_half_pi = m_pi * 0.5f;
	const float m_two_pi = 2.f * m_pi;
	const float m_inv_two_pi = 1.f / m_two_pi;
	const float m_e = 2.71828182845904523536f;
	const float m_sqrt2 = 1.4142135623730950488016887242097f;
	const float	m_deg2rad = m_pi / 180.f;
	const float	m_rad2deg = 180.f / m_pi;
	const float m_eps = 0.00001f;
	const float m_eps2 = m_eps * 10.f;	
	const float m_neps = -m_eps;
	const float m_1_eps = 1.f + m_eps;
	const float m_1_neps = 1.f - m_eps;
}

#	ifndef LIBMATH_FORCE_INLINE
#		ifdef _DEBUG
#			define LIBMATH_FORCE_INLINE 0
#		else
#			define LIBMATH_FORCE_INLINE 1
#		endif
#	endif


#	define LIBMATH_INLINE inline

#	if LIBMATH_FORCE_INLINE == 1
#		define LIBMATH_FUNCTION_INLINE LIBMATH_INLINE static
#		define LIBMATH_METHOD_INLINE LIBMATH_INLINE
#	else
#		define LIBMATH_FUNCTION_INLINE
#		define LIBMATH_METHOD_INLINE
#	endif