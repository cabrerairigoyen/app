#ifndef PI_STREAM_CONTROLLER_H
#define PI_STREAM_CONTROLLER_H

#include <escher.h>

namespace PiStream {

class PiStreamController : public ViewController {
public:
  PiStreamController(Responder * parentResponder);
  View * view() override;
  bool handleEvent(Ion::Events::Event event) override;
  void didBecomeFirstResponder() override;
private:
  class PiStreamView : public View {
  public:
    void drawRect(KDContext * ctx, KDRect rect) const override;
  };
  
  PiStreamView m_view;
};

}

#endif