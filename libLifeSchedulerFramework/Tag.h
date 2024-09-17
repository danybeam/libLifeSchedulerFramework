/*
* Copyright 2024 Daniel Gerardo Orozco Hernandez
*
* THE SOFTWARE IS PROVIDED �AS IS�, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
* OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
#pragma once

#include <string>

namespace LifeScheduler
{
	class Tag
	{
	public:
		// Constructors
		Tag();
		Tag(std::string& name);
		Tag(std::string& name, unsigned int priority);
		virtual ~Tag();

		// Getters and Setters
		void SetName(std::string& newName);
		std::string& GetName();
		void SetPriority(unsigned int newPriority);
		unsigned int GetPriority() const;

	private:
		std::string m_tagName;
		unsigned int m_priority;
	};
}