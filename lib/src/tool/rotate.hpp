#ifndef DILAY_TOOL_ROTATE
#define DILAY_TOOL_ROTATE

#include "tool.hpp"

class ToolRotate : public Tool {
  public:
    DECLARE_BIG3 (ToolRotate, ViewMainWindow&, const glm::ivec2&)

    static bool staticWheelEvent (QWheelEvent&);

  private:
    class Impl;
    Impl* impl;

    bool    runMouseMoveEvent    (QMouseEvent&);
    bool    runMouseReleaseEvent (QMouseEvent&);
    bool    runWheelEvent        (QWheelEvent&);
    QString runMessage           () const;
};

#endif
