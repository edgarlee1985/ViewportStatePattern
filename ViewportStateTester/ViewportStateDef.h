#pragma once

enum EViewportState
{
    NONE_EDIT = 0,
    OBJECT_EDIT,
    BONE_EDIT,
    PATH_EDIT,
};

enum EViewportOperator
{
    NONE = 0,
    SELECT,
    MOVE,
    ROTATE,
    SCALE,
    CAMMOVE,
    CAMROTATE,
    CAMZOOM,
};

