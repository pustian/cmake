set(VERSION_H ${PROJECT_BINARY_DIR}/version/version.h)
configure_file(version.h.in ${VERSION_H})

set(Version_SRCS
version.cc
)

add_library (sub_version_libs ${Version_SRCS})
# add_dependencies(HyperFsBroker HyperCommon HyperComm)
# target_link_libraries(HyperFsBroker HyperCommon HyperComm)

