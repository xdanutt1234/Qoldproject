#ifndef QOLDCONTROL_H
#define QOLDCONTROL_H

    class QoldControl {
        private :
            int relay;
            int mode;
        public : 
        
        QoldControl();
        ~QoldControl();

        void relayAttachToPin(int pinNumber);
        void switchPin();
    };
#endif