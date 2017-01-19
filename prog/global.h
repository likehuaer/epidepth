#ifndef EPI_GLOBAL_H_
#define EPI_GLOBAL_H_

#include "common.h"
#include "sparse_epi.h"

#include "nd.h"
#include "color.h"

#include <cstddef>
#include <vector>

namespace mf {

// configuration
constexpr std::ptrdiff_t bilateral_window_rad = 5;
constexpr real segment_confidence_threshold = 0.0;
constexpr real minimal_disparity = 0.0;
constexpr real maximal_disparity = 2.0;
constexpr real disparity_increment = 0.01;

// dimensions
extern const std::ptrdiff_t final_u_sz;
extern const std::ptrdiff_t final_v_sz;
extern std::ptrdiff_t u_sz;
extern std::ptrdiff_t v_sz;
extern const std::ptrdiff_t s_sz;
extern ndsize<2> epi_shp;
extern ndsize<2> image_shp;

extern const std::ptrdiff_t final_u_sz;
extern const std::ptrdiff_t final_v_sz;

// input, working data
extern std::size_t scale_down_factor;
extern ndarray<3, rgb_color> epis; // [v][u][s]

// output
extern std::vector<sparse_epi> final_sparse_epis; // [v] (epi shape: [u][s]), original scale
extern ndarray<3, real> final_epi_disparities; // [v][u][s], original scale


}

#endif