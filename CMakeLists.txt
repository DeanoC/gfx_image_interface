#if building standalone and not specified build tests
option(BUILD_TESTS "Whether to build tests" ON)
include(FetchContent)
FetchContent_Declare( al2o3 GIT_REPOSITORY https://github.com/DeanoC/al2o3 GIT_TAG master )
FetchContent_GetProperties(al2o3)
if(NOT al2o3_POPULATED)
	FetchContent_Populate(al2o3)
	add_subdirectory(${al2o3_SOURCE_DIR} ${al2o3_BINARY_DIR})
endif()

SET_MIN_VERSIONS()
set(BaseInterfaceName gfx_image)
set(LibName ${BaseInterfaceName}_interface)
project(${LibName})

set(Interface
		block.h
		create.h
		format.h
		format_cracker.h
		image.h
		io.h
		pixel.h
		utils.h
		)
set(Src
		)

set(Deps
		al2o3_platform
		al2o3_cmath
		gfx_imageformat
		)
ADD_LINK_TIME_INTERFACE(${BaseInterfaceName} "${Interface}" "${Src}" "${Deps}")

