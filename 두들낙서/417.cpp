# include <iostream>
#include <stdio.h>
using namespace std;

class Image {
public:
	operator string() {
		return "photo";
	}
};

class TextMessage {
private:
	int sendTime;
	string sendName;
	string text;
public:
	TextMessage(int sendTime, string sendName, string text) {
		this->sendTime = sendTime;
		this->sendName = sendName;
		this->text = text;
	}

	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }
	string GetText() const { return text; }
};

class ImageMessage {
private:
	int sendTime;
	string sendName;
	Image *image;
public:
	ImageMessage(int sendTime, string sendName, string text) {
		this->sendTime = sendTime;
		this->sendName = sendName;
		this->image = image;
	}

	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }
	Image *GetImage() const { return image; }
};

int main() {
	Image* dogImage = new Image;

	TextMessage* hello = new TextMessage(10, "doodle", "hello");
	ImageMessage* dog = new ImageMessage(20, "doodle", dogImage);

	cout << "send time " << hello->GetSendTime() << endl;
	cout << "sender " << hello->GetSendName() << endl;
	cout << "content " << hello->GetText() << endl;
	cout << endl;

	cout << "send time " << dog->GetSendTime() << endl;
	cout << "sender " << dog->GetSendName() << endl;
	cout << "content " << (string)*dog->GetImage() << endl;

	delete dogImage;
	delete hello;
	delete dog;


}